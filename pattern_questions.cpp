/* rectangle pattern */

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i = 0; i<5; i++)
//     {
//         for(int j = 0; j<4; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/* hollow rectangle pattern */

//my solution
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=0; i<4; i++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
//     for(int i =0 ; i<3; i++)
//     {
//         for (int j =0 ; j<4; j++)
//         {
//             if(j==1 || j==2)
//             {
//                 cout<<"  ";
//                 continue;
//             }
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=0; i<4; i++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
//     return 0;
// }

//code in video
// #include<iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     cin>>row>>col;

//     for(int i = 1; i<=row; i++)
//     {
//         for(int j =1 ; j<= col; j++)
//         {
//             if(i==1 || i== row)
//             {
//                 cout<<"*";
//             }
//             else if(j==1 || j==col)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/* inverted pyramid*/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row;
//     cin >> row;

//     for (int i = row; i > 0; i--)
//     {
//         for (int j = i; j > 0; j--)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }



/* Half pyramid after 180degree rotation */

//my code
// #include<iostream>
// using namespace std;
// int main()
// {
//     int row =5;

//     for(int i = 1; i<=row; i++)
//     {
//         for(int j =1; j<=row-i; j++)
//         {
//             cout<<" ";
//         }
//         for(int k =1; k<=i; k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//code in video
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     n = 5;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j =1; j<=n; j++)
//         {
//             if(j<=n-i)
//             {
//                 cout<<" ";
//             }
//             else
//             {
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }


/* Half pyramid using numbers*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     num = 5;
//     for(int i = 1; i<=num; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<i;
//         }
//          cout<<endl;
//     }
   
//     return 0;
// }


/* Floyd's triagle */
// #include<iostream>
// using namespace std;
// int main()
// {
//     int row, num;
//     row = 5;
//     num = 1;
    
//     for(int i =1; i<=row; i++)
//     {
//         for(int j= 1; j<=i; j++)
//         {
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/* Butterfly Pattern */
// #include<iostream>
// using namespace std;
// int main()
// {
//     int col,row;
//     col = 8;
//     row = 4;
//     for(int i =1 ; i<=row; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<"*";
//         }
//         for(int k = 1; k<=col- 2*i; k++)
//         {
//             cout<<" ";
//         }
//         for(int l = 1; l<=i; l++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i =row ; i>0; i--)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<"*";
//         }
//         for(int k = 1; k<=col- 2*i; k++)
//         {
//             cout<<" ";
//         }
//         for(int l = 1; l<=i; l++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }