#include<bits/stdc++.h>
using namespace std;
#define HX		get<0>(head)
#define HY		get<1>(head)
#define HDIR	get<2>(head)
#define TX		get<0>(tail)
#define TY		get<1>(tail)
#define TDIR	get<2>(tail)

int box[100][100];
int cnt = 0;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k;
	cin >> n >> k;
	
	while(k--){
		int x, y;
		cin >> x >> y;
		box[x-1][y-1] = 1;
	}
	
	int l;
	cin >> l;
	queue<pair<int, char> > dir;
	while(l--){
		int time;
		char ld;
		cin >> time >> ld;
		dir.push({time, ld});
	}
	
	tuple<int, int, int> head, tail;
	head = make_tuple(0, 0, 0); tail = make_tuple(0, 0, 0);
	
	box[0][0] = -1;
	auto state = dir.front(); dir.pop();
	int sub = state.first;
	while(1){		
		if(HX < 0 || HX >= n || HY < 0 || HY >= n) break;	//현재 벽에 부딪혔을 때 
		if(state.first == 0){	//방향 틀어야 되는 시간이 됐을 때 
			if(state.second == 'L'){	//왼쪽으로 틀어야 할 때 
				if(HDIR == 0) HDIR = 3;
				else		  HDIR -= 1;
				box[HX][HY] = 4;	//tail이 왼쪽으로 틀어야 함을 의미 
			}
			else if(state.second == 'D'){
				HDIR = (HDIR + 1) % 4;
				box[HX][HY] = 5;	//tail이 오른쪽으로 틀어야 함을 의미 
			}
			
			if(TX == HX && TY == HY){	//몸길이가 1일 때 
				if(box[TX][TY] == 4){	//꼬리의 방향을 왼쪽으로 바꿈 
					if(TDIR == 0) TDIR = 3;
					else		  TDIR -= 1;
				}
				else if(box[TX][TY] == 5){	//꼬리의 방향을 오른쪽으로 바꿈 
					TDIR = (TDIR + 1) % 4;
				}
				box[TX][TY] = 0;	//꼬리의 위치에 있으니까 0으로 초기화 한다. 
			}
			if(!dir.empty()){	//방향큐가 비어있지 않을 때 큐에서 꺼내야한다. 비어있을 때 꺼내면 오류가 생긴다. 
				state = dir.front(); dir.pop();
				int temp = state.first;
				state.first -= sub;
				sub = temp;
			}
			else	//큐가 비어있을 때 시간 상태를 -1로 바꾸어준다. 왜냐하면 그냥 냅두면 0으로 무한 루프를 돌게 된다. 
				state.first = -1;
			continue;
		}
		//head 부분 
		int nhx = HX + dx[HDIR];	//head가 바라보는 다음 좌표를 의미한다. 
		int nhy = HY + dy[HDIR];
		
		if(box[nhx][nhy] == -1){	//자기한테 부딪혔을 때 
			cnt++;
			break;
		}
		else if(box[nhx][nhy] == 1){	//사과 먹었을 때 
			HX = nhx; HY = nhy;
			box[HX][HY] = -1;
			cnt++;
			state.first--;	//사과를 먹어도 시간은 동일하게 흐른다. 이 부분을 빼먹었었다. 
			continue;
		}

		box[nhx][nhy] = -1;		//그냥 몸 늘려서 앞으로 나아갔을 때
		HX = nhx; HY = nhy;
		
		//tail 부분
		int ntx = TX + dx[TDIR];
		int nty = TY + dy[TDIR];
		
		box[TX][TY] = 0;	//꼬리 말기 
		
		if(box[ntx][nty] == 4){	//head가 좌회전 한 구간을 만났을 때 
			if(TDIR == 0) TDIR = 3;
			else		  TDIR -= 1;
		}
		else if(box[ntx][nty] == 5){
			TDIR = (TDIR + 1) % 4;
		}
		
		box[ntx][nty] = -1;
		TX = ntx; TY = nty;
		cnt++;
		state.first--;
	}
	
	cout << cnt;
	return 0;
}
