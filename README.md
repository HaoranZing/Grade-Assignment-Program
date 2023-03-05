# Grade-Assignment-Program (成绩赋分程序)

## 该程序旨在更加方便地进行中考赋分！

## 赋分标准表
```
语文  150 > 150
数学  150 > 150
英语  150 > 150
物理  100 > 75
化学  100 > 75
政治  100 > 50
历史  100 > 50
地理  100 > 50
生物  100 > 50
体育  100 > 50
```

> 各地区的赋分标准略有差异，若想自定义，请下载 `Zip文件` 或 `Fork` 该仓库进行二创，记得 `Star` 哟 (＾Ｕ＾)ノ~ＹＯ ！

## 源代码
``` C++
/*
	Developed by HaoranZing on January 6, 2023. 
	Copyright 2022 ·HaoranZing.
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

// 判断主科分数合法性函数 
bool Check_Main ( double Grades ) {
	if ( Grades > 150.0 || Grades < 0.0 ) {
		return true ;
	}
	return false ;
}

// 判断副科分数合法性函数 
bool Check_Deputy ( double Grades ) {
	if ( Grades > 100.0 || Grades < 0.0 ) {
		return true ;
	}
	return false ;
}

// 判断体育分数合法性函数 
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
		
		// 询问语文成绩 
		if ( i == 1 ) {
			cout << "请输入您的 语文成绩：" ;
			scanf ( "%lf" , &HaoranZing.Chinese ) ;
			if ( Check_Main ( HaoranZing.Chinese ) ) {
				cout << "成绩错误！请重新输入！" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += HaoranZing.Chinese ;
			}
		}
		
		// 询问数学成绩 
		if ( i == 2 ) {
			cout << "请输入您的 数学成绩：" ;
			scanf ( "%lf" , &HaoranZing.Math ) ;
			if ( Check_Main ( HaoranZing.Math ) ) {
				cout << "成绩错误！请重新输入！" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += HaoranZing.Math ;
			}
		}
		
		// 询问英语成绩 
		if ( i == 3 ) {
			cout << "请输入您的 英语成绩：" ;
			scanf ( "%lf" , &HaoranZing.English ) ;
			if ( Check_Main ( HaoranZing.English ) ) {
				cout << "成绩错误！请重新输入！" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += HaoranZing.English ;
			}
		}
		
		// 询问政治成绩 
		if ( i == 4 ) {
			cout << "请输入您的 政治成绩：" ;
			scanf ( "%lf" , &HaoranZing.Politics ) ;
			if ( Check_Deputy ( HaoranZing.Politics ) ) {
				cout << "成绩错误！请重新输入！" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += ( HaoranZing.Politics * 0.5 ) ;
			}
		}
		
		// 询问历史成绩 
		if ( i == 5 ) {
			cout << "请输入您的 历史成绩：" ;
			scanf ( "%lf" , &HaoranZing.History ) ;
			if ( Check_Deputy ( HaoranZing.History ) ) {
				cout << "成绩错误！请重新输入！" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += ( HaoranZing.History * 0.5 ) ;
			}
		}
		
		// 询问物理成绩 
		if ( i == 6 ) {
			cout << "请输入您的 物理成绩：" ;
			scanf ( "%lf" , &HaoranZing.Physics ) ;
			if ( Check_Deputy ( HaoranZing.Physics ) ) {
				cout << "成绩错误！请重新输入！" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += ( HaoranZing.Physics * 0.75 ) ;
			}
		}
		
		// 询问化学成绩 
		if ( i == 7 ) {
			cout << "请输入您的 化学成绩：" ;
			scanf ( "%lf" , &HaoranZing.Chemistry ) ;
			if ( Check_Deputy ( HaoranZing.Chemistry ) ) {
				cout << "成绩错误！请重新输入！" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += ( HaoranZing.Chemistry * 0.75 ) ;
			}
		}
		
		// 询问体育成绩 
		if ( i == 8 ) {
			cout << "请输入您的 体育成绩：" ;
			scanf ( "%lf" , &HaoranZing.PE ) ;
			if ( Check_PE ( HaoranZing.PE ) ) {
				cout << "成绩错误！请重新输入！" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += HaoranZing.PE ;
			}
		}
		
		// 询问生物成绩 
		if ( i == 9 ) {
			cout << "请输入您的 生物成绩：（例如：91 ）" ;
			scanf ( "%lf" , &HaoranZing.Creature ) ;
			if ( Check_Deputy ( HaoranZing.Creature ) ) {
				cout << "成绩错误！请重新输入！" << endl ;
				i-- ;
				continue ;
			} 
			else {
				Total += ( HaoranZing.Creature * 0.5 ) ;
			}
		}
		
		// 询问地理成绩 
		if ( i == 10 ) {
			cout << "请输入您的 地理成绩：（例如：93 ）" ;
			scanf ( "%lf" , &HaoranZing.Geography ) ;
			if ( Check_Deputy ( HaoranZing.Geography ) ) {
				cout << "成绩错误！请重新输入！" << endl ;
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
	cout << "----- 成绩录入成功！-----" << endl ;
	cout << "------开始分析成绩！-----" << endl ;
	cout << "-------------------------" << endl ; 
	Sleep ( 1000 ) ;
	
	// 进度条动画 
	int c = 1, d = 0;
    for (int i = 0; i < 50; i++)
    {
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "\t\t\t\t+-------------------------------------------------+" << endl;
        cout << "\t\t\t\t|";
        for (int a = 0; a < i; a++)   //打印▋
        {
            cout << "▋";
        }
        for (int b = 49 - i; b > 0; b--)   //打印空格
        {
            cout << " ";
        }
        d += 2;   //进度数
        cout << "|  " << d << "%" << endl;
        cout << "\t\t\t\t+-------------------------------------------------+" << endl;
        cout << "\t\t\t\t               正在加载中，请稍后.";
        for (int j = 0; j < c % 6; j++)
        {
            cout << ".";
        }
        c++;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        Sleep(50);   //进度条读取速度
        if (i != 49)
        {
            system("cls");   //清屏
        }
    }
	
	system ( "cls" ) ;
	
	cout << "-------------------------" << endl ;
	cout << "----- 成绩分析完毕！-----" << endl ;
	cout << "-------------------------" << endl ; 
	cout << "==> 您的总成绩为: " << Total << endl ;
	cout << "-------------------------" << endl ; 
	cout << "------感谢您的使用！-----" << endl ; 
	cout << "-------------------------" << endl ; 
	cout << "Developed by HaoranZing on January 6, 2023." << endl << endl << endl ; 
	
	system ( "pause" ) ;
	
	return 0 ;
} 
```
