#include<iostream>
#include<Windows.h>
#include<math.h>

using namespace std;

void Task_1();
void Task_2();
void Task_3();
void Task_4();
void Task_5();
void Task_6();
void Task_7();
void Task_8();
void Task_9();
void Task_10();
void one_dimensional_arrays();
void task1();
void task2();
void task3();
void task4();
void task5();

int main()
{
	setlocale(LC_ALL, "Russian"); 
	srand(time(NULL));
	while (true) {
		int choise;
		cout << "����� ������ �������? " << '\n' << "�� 1 �� 10 � 11 - �������" << endl;
		cin >> choise;
		switch (choise) {
		case 1:
			Task_1();
			break;
		case 2:
			Task_2();
			break;
		case 3:
			Task_3();
			break;
		case 4:
			Task_4();
			break;
		case 5:
			Task_5();
			break;
		case 6:
			Task_6();
			break;
		case 7:
			Task_7();
			break;
		case 8:
			Task_8();
			break;
		case 9:
			Task_9();
			break;
		case 10:
			Task_10();
			break;
		case 11:
			one_dimensional_arrays();
			break;
		}
	}

	return 0;
}

void Task_1() {
	system("cls");
	int f;
	char a = '*';
	while (true) {
		cout << "������ ����� �� 1 �� 10" << endl;
		cout << "0- �����" << endl;
		cin >> f;

		if (f > 10 || f < 0) {
			cout << "�� 1 �� 10!!!!" << endl;;
			continue;
		}
		if (f == 0) {
			cout << "�����"<<'\n';
			break;
		}

		switch (f) {

		case 1:
			for (int i = 6; i > 0; i--) {
				for (int j = 0; j < 6; j++) {
					if (j < 6 - i)
						cout << " ";
					else
						cout << "*";
				}
				cout << "\n";
			}
			break;

		case 2:
			for (int i = 0; i < 6; i++) {
				for (int j = 0; j < i; j++) {
					if (i == 0)
					{
						break;
					}
					cout << a;
				}
				cout << "\n";
			}
			break;
		case 3:
			for (int a = 7, j = 0; j != 4; ++j, a -= 2) {
				for (int i = 0; i < j; ++i) {
					cout << " ";
				}
				for (int i = 0; i < a; ++i) {
					cout << "*";
				}
				cout << "\n";
			}
			break;

		case 4:
			for (int a = 1, j = 4; j != 0; --j, a += 2) {
				for (int i = 0; i < j; ++i) {
					cout << " ";
				}
				for (int i = 0; i < a; ++i) {
					cout << "*";
				}
				cout << "\n";
			}
			break;
		case 5:
			for (int a = 7, j = 1; j != 5; ++j, a -= 2) {
				for (int i = 0; i < j; ++i) {
					cout << " ";
				}
				for (int i = 0; i < a; ++i) {
					cout << "*";
				}
				cout << "\n";
			}
			for (int a = 1, j = 4; j != 0; --j, a += 2) {
				for (int i = 0; i < j; ++i) {
					cout << " ";
				}
				for (int i = 0; i < a; ++i) {
					cout << "*";
				}
				cout << "\n";
			}
			break;
		case 6:
			for (int a = 7, j = 1; j != 5; ++j, a -= 2) {
				for (int i = 0; i < j; ++i) {
					cout << " ";
				}
				for (int i = 0; i < a; ++i) {
					cout << "*";
				}
				cout << "\n";
			}
			for (int a = 1, j = 4; j != 0; --j, a += 2) {
				for (int i = 0; i < j; ++i) {
					cout << " ";
				}
				for (int i = 0; i < a; ++i) {
					cout << "*";
				}
				cout << "\n";
			}
			break;
		case 7:
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < i; j++) {
					if (i == 0)
					{
						break;
					}
					cout << a;
				}
				cout << "\n";
			}
			for (int y = 1; y <= 4; y++) {
				for (int x = 1; x <= 4; x++) {
					if (x >= y)
						cout << a;
				}
				cout << "\n";
			}
			break;
		case 8:
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					if (j < 4 - i)
						cout << " ";
					else
						cout << "*";
				}
				cout << "\n";
			}
			for (int i = 4; i > 0; i--) {
				for (int j = 0; j < 4; j++) {
					if (j < 4 - i)
						cout << " ";
					else
						cout << "*";
				}
				cout << "\n";
			}
			break;

		case 9:
			for (int y = 1; y <= 5; y++) {
				for (int x = 1; x <= 5; x++) {
					if (x >= y)
						cout << a;

				}
				cout << "\n";
			}
			break;
		case 10:
			for (int i = 0; i < 6; i++) {
				for (int j = 0; j < 6; j++) {
					if (j < 6 - i)
						cout << " ";
					else
						cout << "*";
				}
				cout << "\n";
			}
			break;
		}
	}
	}
void Task_2() {
	system("cls");
	int counter = 0;
	int n1, n2, n3;
	for (int i = 100; i <= 999; i++) {
		n1 = i / 100;
		n2 = (i % 100) / 10;
		n3 = i % 10;
		if (n1 == n2 || n1 == n3 || n2 == n3)counter++;
	}
	cout << "����������� ����� ����� � ��������� �� 100 �� 999 � ������� ���� ��� ���������� ����� ����� - " <<">>>>>  "<< counter<<"  <<<<<" << endl;
	}
void Task_3() {
	system("cls");
	int counter = 0;
	int n1, n2, n3;
	for (int i = 100; i <= 999; i++) {
		n1 = i / 100;
		n2 = (i % 100) / 10;
		n3 = i % 10;
		if (n1 != n2 && n2 != n3 && n3 != n1)counter++;
	}
	cout << "����������� ����� ����� � ��������� �� 100 �� 999 � ������� ��� ����� ������ - " << ">>>>>  " << counter << "  <<<<<" << endl;

	}
void Task_4() {
	system("cls");
	int a = 0, n,counter=0;
	cout << "�������� 3 � 6 �� �����" << endl;
	cout << "������� �����: ";
	cin >> n;
	cout << endl;
	cout << n<<endl;

	while (n > 0)
	{
		a = n % 10;
		if (a != 3 && a != 6)
		{
			counter *= 10;
			counter += n % 10;
		}
		n /= 10;
	}
	cout << "���������� �����: ";
	while (counter > 0)
	{
		cout<<counter % 10;
		counter /= 10;
	}
	cout << endl;

}
void Task_5() {
	system("cls");
	int a;
	cout << "������� ����� ����� :";
	cin >> a;
	int c = (int)sqrt((double)a);
	for (int b = 2; b <= c; b++)
		if (a % (b * b) == 0 && a % (b * b * b))
			cout <<"��� ����� ����� B ��� ������� � �������� ��� ������� �� � * � � �� �������� ��� ������� �� � * � * � "<<'\n' <<">>>>> "<< b <<" <<<<<" << endl;
}
void Task_6() {
	system("cls");
	int a, sum = 0, i = 0, x;
	cout << "������� ����� ����� :";
	cin >> a;
	x = a;

	while (a > 0) {
		i = a % 10;
		sum +=i ;
		a /= 10;
	}
	cout <<"��� ����� ���� ����� ����� ����� "<<'\t' << sum * sum * sum << endl;
	cout << "������� ����� ����� ����� " << '\t' << x * x << endl;
	if (a * a == sum * sum * sum)cout << "��� ����� ���� ����� ����� ����� �������� ����� ����� " << endl;
	else cout << "�� �����" << endl;
}
void Task_7() {
	system("cls");
	int a,count=0;
	cout << "������� ����� ����� :";
	cin >> a;
	cout << "����� �� ������� ��� ����� �������� ��� �������" << endl;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0)cout << i << endl;
	}


}
void Task_8() {
	system("cls");
	int a, b, count = 0;
	cout << "������� ��� ����� �����:";
	cout << endl;
	cin >> a >> b;
	cout << "����� �� ������� ��� ��� ����� �������� ��� �������" << endl;
	
	cout << '\n' << "��� �����" <<'\t' << a << '\n';
	for (int i = 1; i <= a; i++) {
		if (a % i == 0)cout << i << '\n';
	}cout <<'\n' << "��� �����" <<'\t' << b << '\n';
	for (int j = 1; j <= b; j++) {
		if (b % j == 0)cout << j << '\n';
	}
}
void Task_9() {
	system("cls");
	int a, x, i, y, count = 0, count_1 = 0,count_2=0;
	cout << "������� ����� " << endl;
	cin >> a;
	int b = a;
	int c = a;
	double v = a;
	float z=0;
	cout << "1 - ����� ���������� ���� � �����" << '\n' << "2 - ��������� ����� ���� ����� " << '\n' << "3 - ��������� ������� �������������� " <<'\n' << "4 - ���������� ����� � �����" << '\n' << "0 - �����" << endl;
	while (true) {
		cin >> x;
		if (x == 0)break;
		switch (x)
		{
		case 1:
			while (a > 0) {
				i = a % 10;
				count++;
				a /= 10;
			}
			cout << "���� � ����� = " << count << endl;
			break;
		case 2:
			while (c > 0) {
				y = c % 10;
				count_1 += y;
				c /= 10;
			}cout << "����� ���� = " << count_1 << endl;
			break;
		case 3:
			while (v > 0) {
				while (a > 0) {
					i = a % 10;
					count++;
					a /= 10;
				}
				while (c > 0) {
					y = c % 10;
					count_1 += y;
					c /= 10;
				}
				z = float(count_1) / float(count);
				v--;
			}cout << "������� �������������� ����� = "<< z << endl;
			break;
		case 4:
			while (b > 0) {
				if (b % 10 == 0) {
					count_2++;	
				}
				b /= 10;
			}
			cout << "����� � ����� = " << count_2 << endl;
			break;
		}
	}
}
void Task_10() {
	int h, a, w;
	cout << "������� ������ ��������� �����.\nh = ";
	cin >> h;
	cout << "������� ������ ��������� �����.\nw = ";
	cin >> w;
	cout << "������� �������� ������ ��������� �����.\na = ";
	cin >> a;
	for (int i = 0; i < h; i++)
	{
		for (int jj = 0; jj < a; jj++)
		{
			for (int j = 0; j < w; j++)
			{
				for (int ii = 0; ii < a; ii++)
				{
					((i + j) % 2) ? (cout << '-') : (cout << 'x');
				}
			}
			cout << '\n';
		}
	}
	cout << "\n\n\n";
}


void one_dimensional_arrays() {
	int a;
	

while(true) {
	cout << "�������� ������� �� 1 �� 5 � ��������" << '\n';
	cout << "������ ����� �� ��������,������� 0" << '\n';
	cin >> a;
	cout << endl;
	if (a == 0)break;
	switch (a)
	{
	case 1:
		task1();
		break;
	case 2:
		task2();
		break;
	case 3:
		task3();
		break;
	case 4:
		task4();
		break;
	case 5:
		task5();
		break;

	}
	}
}


void task1() {
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 25;
		cout << arr[i]<<'\t';
	}
	cout << endl << endl;
	
	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < size; i++) {
		if (arr[i] > max)max = arr[i];
		if (arr[i] < min)min = arr[i];
	}
	cout <<" min  " << min << endl;
	cout <<" max  " << max << endl;
}
void task2(){
	const int size = 12;
	int arr[size];
	cout << "������� �������� �� ������ ����� � ������� ����" << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
		
	}
	system("cls");
	for (int i = 0; i < size; i++) {
		cout << "�����" <<'\t' << i + 1 <<'\t' << arr[i] << endl;
	}
	cout << endl;
	
	int d1, d2, min, max;
	
	while (true) {
		cout << "������� � ������ �� ����� ����� ���������� �������" << endl;
		cin >> d1 >> d2;

		if (d1 < d2) {
			max=min = d1 - 1;
		
			for (int i = d1; i <= d2; i++) {
				if (arr[i] < arr[max])max = arr[i];
				if (arr[i] > arr[min])min = arr[i];
			}
			cout << "max" << max << endl;
			cout << "min" << min << endl;

		}
		else {
			cout << "������������ ��������" << endl;
		}
	}
}
void task3() {
	system("cls");
	const int N = 10;
	double arr[N];
	bool there;
	// ����� �������� ������������ ��������
	for (int i = 0; i < N;) {
		there = false;

		double newRand = -10.5 + rand() % 23;
		for (int j = 0; j < i; j++) {
			if (arr[j] == newRand) {
				there = true;
				break;
			}
		}
		if (!there) {
			arr[i] = newRand;
			i++;
		}
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i] << '\t';
	}
	cout << endl;

	//�������
	while (true) {
		int a;
		double chet = 1;
		double sum = 0;
		double max1 = 0;
		double min1 = 0;

		double first_negative = 0;
		double second_negative = 0;
		int first_negative_index;
		int second_negative_index;


		double composition = 1;

		int max_index;
		int min_index;
		cout << "1-����� ������������� ���������\n2-������������ ���������, ����������� ����� min � max ����������\n3-������������ ��������� � ������� ��������\n4-����� ���������, ����������� ����� ������ � ��������� �������������� ����������" << endl;
		cin >> a;
		if (a == 0)break;
		switch (a)
		{
		case 1:

			cout << endl << "����� ������������� ��������� :" << '\t';
			for (int i = 0; i < N; i++) {
				if (arr[i] < 0)sum += arr[i];
			}
			cout << sum << endl << endl;;
			break;


		case 2:
			//   ������������


			for (int j = 0; j < N; j++) {
				if (arr[j + 1] < arr[j] && arr[j]>0 && arr[j] > max1)
					max1 = arr[j];
				if (arr[j] == max1)max_index = j;

			}
			cout << "max :" << max1 << "\t������  " << max_index << '\n';


			//  �����������


			for (int j = 0; j < N; j++) {
				if (arr[j + 1] > arr[j] && arr[j] < 0 && arr[j] < min1)
					min1 = arr[j];
				if (arr[j] == min1)min_index = j;
			}
			cout << "min :" << min1 << "\t������   " << min_index << '\n';

			// ������������

			for (int x = 0; x < N; x++) {
				if (max_index < min_index) {
					for (int i = max_index; i < min_index; i++)
						composition *= arr[i];
					cout << "\t������������\t:" << composition << '\t';
					cout << endl;
					break;
				}
				if (min_index < max_index) {
					for (int i = min_index; i < max_index; i++)
						composition *= arr[i];
					cout << "\t������������\t:" << composition << '\t';
					cout << endl;
					break;
				}
			}


			break;

		case 3:


			for (int i = 1; i < N; i++) {
				if ((int)arr[i] % 2 == 0)chet *= arr[i];

			}
			cout << "������������ : " << chet << '\t';
			cout << endl << endl;


			break;
				case 4:

					for (int j = 0; j < N; j++) {
						if (arr[j] < 0) {
							if (arr[j] < first_negative) {
								first_negative = arr[j];
								first_negative_index = j;
							}
							break;
						}
					}
						cout << first_negative <<"  ������ "<<first_negative_index <<'\t'<<'\n';

						for (int j = 0; j < N; j++) {
							if (arr[j] < 0)second_negative = arr[j];
							second_negative_index = j;
						}
						cout << second_negative <<"  ������  "<<second_negative_index <<'\t'<<'\n';
					}

				for (int i = first_negative_index; i < second_negative_index; i++) {
					sum += arr[i];
					}
				cout << "����� �����\t"<<first_negative<<"\t�\t" <<second_negative<<"\t�����\t:\t" << sum << endl;


					break;
				}
		}

void task4() {
			int A[5], B[5], C[10];
			bool there;
			for (int i = 0; i < 10;) {
				there = false;
				int newRand = rand() % 38;
				for (int j = 0; j < i; j++) {
					if (C[i] == newRand) {
						there = true;
						break;
					}
				}
				if (!there) {
					C[i] = newRand;
					i++;
				}
			}
			for (int j = 0; j < 10; j++) {
				cout << C[j] << '\t';
			}
			cout << endl << endl << endl;

			for (int i=0,j=0; i < 5;i++,j+=2) {
				A[i] = C[j];
			}
			for (int i = 0, j = 1; i < 5; i++, j+=2) {
				B[i] = C[j];
			}

			for (int i = 0; i < 5; i++) {
				cout << A[i]<<'\t' << '\t';
			}
			cout << endl << endl;

			for (int i = 0; i < 5; i++) {
				cout <<'\t' << B[i] << '\t';
			}
			cout << endl << endl;


		}
	
void task5() {
	int A[5], B[5], C[5];
	
	bool there;
	// ���������� ����� ��� ������� A[5]
	for (int i = 0; i < 5;) {
		there = false;
		int newRand = rand() % 28;
		for (int j = 0; j < i; j++) {
			if(A[i]==newRand) {
				there = true;
				break;
			}
		}
		if (!there) {
			A[i] = newRand;
			i++;
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << A[i] << '\t';
		}
	cout << endl << endl; 
	
	// ���������� ����� ��� ������� B[5]
	for (int i = 0; i < 5;) {
		there = false;
		int newRand = rand() % 28;
		for (int j = 0; j < i; j++) {
			if (B[i] == newRand) {
				there = true;
				break;
			}
		}
		if (!there) {
			B[i] = newRand;
			i++;
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << B[i] << '\t';
	}
	cout << endl << endl;
	cout << "����� �����������" << endl;
	for (int i = 0; i < 5; i++) {
		C[i] = A[i] + B[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << C[i] << '\t';
	}
	cout << endl << endl << endl;




}
