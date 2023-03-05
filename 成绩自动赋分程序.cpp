/*
	Developed by HaoranZing on January 6, 2023. 
	Copyright 2022 ��HaoranZing.
	Website URL : https://haoranzing.com/  &  https://www.cnblogs.com/HaoranZing/
*/ 

# include <bits/stdc++.h>
# include <windows.h>
using namespace std ;
 
struct Peak {
	double Chinese ;
	double Math ;
	double English ;
	double Politics ;
	double History ;
	double Physics ;
	double Chemistry ;
	double PE ;
	double Creature ;
	double Geography ;
} ;

// �ж����Ʒ����Ϸ��Ժ��� 
bool Check_Main ( double Grades ) {
	if ( Grades > 150.0 || Grades < 0.0 ) {
		return true ;
	}
	return false ;
}

// �жϸ��Ʒ����Ϸ��Ժ��� 
bool Check_Deputy ( double Grades ) {
	if ( Grades > 100.0 || Grades < 0.0 ) {
		return true ;
	}
	return false ;
}

// �ж����������Ϸ��Ժ��� 
bool Check_PE ( double Grades ) {
	if ( Grades > 50.0 || Grades < 0.0 ) {
		return true ;
	}
	return false ;
}

int main ( ) {
	
	Peak HaoranZing ;
	double Total = 0.0 ;
	
	for ( int i = 1 ; i <= 10 ; i++ ) {
		
		// ѯ�����ĳɼ� 
		if ( i == 1 ) {
			cout << "���������� ���ĳɼ���" ;
			scanf ( "%lf" , &HaoranZing.Chinese ) ;
			if ( Check_Main ( HaoranZing.Chinese ) ) {
				cout << "�ɼ��������������룡" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += HaoranZing.Chinese ;
			}
		}
		
		// ѯ����ѧ�ɼ� 
		if ( i == 2 ) {
			cout << "���������� ��ѧ�ɼ���" ;
			scanf ( "%lf" , &HaoranZing.Math ) ;
			if ( Check_Main ( HaoranZing.Math ) ) {
				cout << "�ɼ��������������룡" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += HaoranZing.Math ;
			}
		}
		
		// ѯ��Ӣ��ɼ� 
		if ( i == 3 ) {
			cout << "���������� Ӣ��ɼ���" ;
			scanf ( "%lf" , &HaoranZing.English ) ;
			if ( Check_Main ( HaoranZing.English ) ) {
				cout << "�ɼ��������������룡" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += HaoranZing.English ;
			}
		}
		
		// ѯ�����γɼ� 
		if ( i == 4 ) {
			cout << "���������� ���γɼ���" ;
			scanf ( "%lf" , &HaoranZing.Politics ) ;
			if ( Check_Deputy ( HaoranZing.Politics ) ) {
				cout << "�ɼ��������������룡" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += ( HaoranZing.Politics * 0.5 ) ;
			}
		}
		
		// ѯ����ʷ�ɼ� 
		if ( i == 5 ) {
			cout << "���������� ��ʷ�ɼ���" ;
			scanf ( "%lf" , &HaoranZing.History ) ;
			if ( Check_Deputy ( HaoranZing.History ) ) {
				cout << "�ɼ��������������룡" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += ( HaoranZing.History * 0.5 ) ;
			}
		}
		
		// ѯ������ɼ� 
		if ( i == 6 ) {
			cout << "���������� ����ɼ���" ;
			scanf ( "%lf" , &HaoranZing.Physics ) ;
			if ( Check_Deputy ( HaoranZing.Physics ) ) {
				cout << "�ɼ��������������룡" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += ( HaoranZing.Physics * 0.75 ) ;
			}
		}
		
		// ѯ�ʻ�ѧ�ɼ� 
		if ( i == 7 ) {
			cout << "���������� ��ѧ�ɼ���" ;
			scanf ( "%lf" , &HaoranZing.Chemistry ) ;
			if ( Check_Deputy ( HaoranZing.Chemistry ) ) {
				cout << "�ɼ��������������룡" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += ( HaoranZing.Chemistry * 0.75 ) ;
			}
		}
		
		// ѯ�������ɼ� 
		if ( i == 8 ) {
			cout << "���������� �����ɼ���" ;
			scanf ( "%lf" , &HaoranZing.PE ) ;
			if ( Check_PE ( HaoranZing.PE ) ) {
				cout << "�ɼ��������������룡" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += HaoranZing.PE ;
			}
		}
		
		// ѯ������ɼ� 
		if ( i == 9 ) {
			cout << "���������� ����ɼ��������磺91 ��" ;
			scanf ( "%lf" , &HaoranZing.Creature ) ;
			if ( Check_Deputy ( HaoranZing.Creature ) ) {
				cout << "�ɼ��������������룡" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += ( HaoranZing.Creature * 0.5 ) ;
			}
		}
		
		// ѯ�ʵ���ɼ� 
		if ( i == 10 ) {
			cout << "���������� ����ɼ��������磺93 ��" ;
			scanf ( "%lf" , &HaoranZing.Geography ) ;
			if ( Check_Deputy ( HaoranZing.Geography ) ) {
				cout << "�ɼ��������������룡" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += ( HaoranZing.Geography * 0.5 ) ;
			}
		}
	}	
	
	system ( "cls" ) ;
	cout << "-------------------------" << endl ;
	cout << "----- �ɼ�¼��ɹ���-----" << endl ;
	cout << "------��ʼ�����ɼ���-----" << endl ;
	cout << "-------------------------" << endl ; 
	Sleep ( 1000 ) ;
	
	// ���������� 
	int c = 1, d = 0;
    for (int i = 0; i < 50; i++)
    {
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "\t\t\t\t+-------------------------------------------------+" << endl;
        cout << "\t\t\t\t|";
        for (int a = 0; a < i; a++)   //��ӡ��
        {
            cout << "��";
        }
        for (int b = 49 - i; b > 0; b--)   //��ӡ�ո�
        {
            cout << " ";
        }
        d += 2;   //������
        cout << "|  " << d << "%" << endl;
        cout << "\t\t\t\t+-------------------------------------------------+" << endl;
        cout << "\t\t\t\t               ���ڼ����У����Ժ�.";
        for (int j = 0; j < c % 6; j++)
        {
            cout << ".";
        }
        c++;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        Sleep(50);   //��������ȡ�ٶ�
        if (i != 49)
        {
            system("cls");   //����
        }
    }
	
	system ( "cls" ) ;
	
	cout << "-------------------------" << endl ;
	cout << "----- �ɼ�������ϣ�-----" << endl ;
	cout << "-------------------------" << endl ; 
	cout << "==> �����ܳɼ�Ϊ: " << Total << endl ;
	cout << "-------------------------" << endl ; 
	cout << "------��л����ʹ�ã�-----" << endl ; 
	cout << "-------------------------" << endl ; 
	cout << "Developed by HaoranZing on January 6, 2023." << endl << endl << endl ; 
	
	system ( "pause" ) ;
	
	return 0 ;
} 
