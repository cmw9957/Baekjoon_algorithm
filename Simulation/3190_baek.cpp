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
		if(HX < 0 || HX >= n || HY < 0 || HY >= n) break;	//���� ���� �ε����� �� 
		if(state.first == 0){	//���� Ʋ��� �Ǵ� �ð��� ���� �� 
			if(state.second == 'L'){	//�������� Ʋ��� �� �� 
				if(HDIR == 0) HDIR = 3;
				else		  HDIR -= 1;
				box[HX][HY] = 4;	//tail�� �������� Ʋ��� ���� �ǹ� 
			}
			else if(state.second == 'D'){
				HDIR = (HDIR + 1) % 4;
				box[HX][HY] = 5;	//tail�� ���������� Ʋ��� ���� �ǹ� 
			}
			
			if(TX == HX && TY == HY){	//�����̰� 1�� �� 
				if(box[TX][TY] == 4){	//������ ������ �������� �ٲ� 
					if(TDIR == 0) TDIR = 3;
					else		  TDIR -= 1;
				}
				else if(box[TX][TY] == 5){	//������ ������ ���������� �ٲ� 
					TDIR = (TDIR + 1) % 4;
				}
				box[TX][TY] = 0;	//������ ��ġ�� �����ϱ� 0���� �ʱ�ȭ �Ѵ�. 
			}
			if(!dir.empty()){	//����ť�� ������� ���� �� ť���� �������Ѵ�. ������� �� ������ ������ �����. 
				state = dir.front(); dir.pop();
				int temp = state.first;
				state.first -= sub;
				sub = temp;
			}
			else	//ť�� ������� �� �ð� ���¸� -1�� �ٲپ��ش�. �ֳ��ϸ� �׳� ���θ� 0���� ���� ������ ���� �ȴ�. 
				state.first = -1;
			continue;
		}
		//head �κ� 
		int nhx = HX + dx[HDIR];	//head�� �ٶ󺸴� ���� ��ǥ�� �ǹ��Ѵ�. 
		int nhy = HY + dy[HDIR];
		
		if(box[nhx][nhy] == -1){	//�ڱ����� �ε����� �� 
			cnt++;
			break;
		}
		else if(box[nhx][nhy] == 1){	//��� �Ծ��� �� 
			HX = nhx; HY = nhy;
			box[HX][HY] = -1;
			cnt++;
			state.first--;	//����� �Ծ �ð��� �����ϰ� �帥��. �� �κ��� ���Ծ�����. 
			continue;
		}

		box[nhx][nhy] = -1;		//�׳� �� �÷��� ������ ���ư��� ��
		HX = nhx; HY = nhy;
		
		//tail �κ�
		int ntx = TX + dx[TDIR];
		int nty = TY + dy[TDIR];
		
		box[TX][TY] = 0;	//���� ���� 
		
		if(box[ntx][nty] == 4){	//head�� ��ȸ�� �� ������ ������ �� 
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
