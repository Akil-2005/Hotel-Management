#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;

    int qroom=0, qidly=0, qdosa=0, qpoori=0, qpongal=0, qvada=0, qtea=0, qcoffee=0;
    int sroom=0, sidly=0, sdosa=0, spoori=0, spongal=0, svada=0, stea=0, scoffee=0;
    int troom=0, tidly=0, tdosa=0, tpoori=0, tpongal=0, tvada=0, ttea=0, tcoffee=0;
    

    cout<<"\n \t Quantity item which you have";
    cout<<"\n Room available";
    cin>>qroom;
    cout<<"\n Quantity of idly";
    cin>>qidly;
    cout<<"\n Quantity of dosa";
    cin>>qdosa;
    cout<<"\n Quantity of poori";
    cin>>qpoori;
    cout<<"\n Quantity of pongal";
    cin>>qpongal;
    cout<<"\n Quantity of vada";
    cin>>qvada;
    cout<<"\n Quantity of tea";
    cin>>qtea;
    cout<<"\n Quantity of coffee";
    cin>>qcoffee;

    m:
    cout <<"\n \t \t \t Please select your option";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) idly";
    cout<<"\n3) dosa";
    cout<<"\n4) poori";
    cout<<"\n5) pongal";
    cout<<"\n6) vada";
    cout<<"\n7) tea";
    cout<<"\n8) coffee";
    cout<<"\n9) Information regarding sales and collection";
    cout<<"\n10) Exit";

    cout<<"\n\n Please Enter Your Choice";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\n \n Enter the number of rooms you want";
            cin>>quant;

            if(qroom-sroom>troom)
            {
                sroom=sroom+quant;
                troom=troom+quant*1200;
                cout<<"\n \n\t"<<quant<<"room are alloted for you";
            }
            else{
                cout<<"\n\n"<<qroom-sroom<<"rooms are available";
                break;
            }
        
            case 2:
                cout<<"\n\n Enter the number of idly you want";
                cin>>quant;

                if(qidly-sidly>tidly)
                {
                    sidly=sidly+quant;
                    tidly=tidly+quant*250;
                    cout<<"\n \n\t"<<quant<<"idly is the order";
                }
                else{
                    cout<<"\n\n"<<qidly-sidly<<"idly remaining in hotel";
                    break;
                }
            case 3:
                cout<<"\n\n Enter the number of dosa you want";
                cin>>quant;

                    if(qdosa-sdosa>tdosa)
                    {
                        sdosa=sdosa+quant;
                        tdosa=tdosa+quant*250;
                        cout<<"\n\n \t"<<quant<<"dosa is the order";
                    }
                    else{
                        cout<<"\n\n"<<qdosa-sdosa<<"dosa remaining in hotel";
                        break;
                    }
            case 4:
                    cout<<"\n\n Enter the number of poori you want";
                    cin>>quant;

                    if(qpoori-spoori>tpoori)
                    {
                        spoori=spoori+qpoori;
                        tpoori=tpoori+quant*250;
                        cout<<"\n\n \t"<<quant<<"poori is the order";
                    }
                    else{
                        cout<<"\n\n"<<qpoori-spoori<<"poori remaining in hotel";
                        break;
            case 5:
                    cout<<"\n\n Enter the number of pongal you want";
                    cin>>quant;

                    if(qpongal-spongal>tpongal)
                    {
                        spongal=spongal+quant;
                        tpongal=tpongal+aquant*250;
                        cout<<"\n\n \t"<<quant<<"pongal is the order";
                    }
                    else{
                        cout<<"\n\n"<<qpongal-spongal<<"pongal remaining in hotel";
                        break;
                    }
            case 6:
                    cout<<"\n\n Enter the number of vada you want";
                    cin>>quant;

                    if(qvada-svada>tvada)
                    {
                        svada=svada+quant;
                        tvada=tvada+quant*250;
                        cout<<"\n\n \t"<<quant<<"vada is the order";
                    }
                    else{
                        cout<<"\n\n"<<qvadaa-svada<<"vada remaining in hotel";
                        break;
                    }
            case 7:
                    cout<<"\n\n Enter the number of tea you want";
                    cin>>quant;

                    if(qtea-stea>ttea)
                    {
                        stea=stea+quant;
                        ttea=ttea+quant*250;
                        cout<<"\n\n \t"<<quant<<"tea is the order";
                    }
                    else{
                        cout<<"\n\n"<<qtea-stea<<"dosa remaining in hotel";
                        break;
                    }
            case 8:
                    cout<<"\n\n Enter the number of coffee you want";
                    cin>>quant;

                    if(qcoffee-scoffee>tcoffee)
                    {
                        scoffee=scoffee+quant;
                        tcoffee=tcoffee+quant*250;
                        cout<<"\n\n \t"<<quant<<"cofffee is the order";
                    }
                    else{
                        cout<<"\n\n"<<qcoffee-scoffee<<"coffee remaining in hotel";
                        break;
                    }
            case 9:
                    cout<<"\n\n\t Details of sales and information";
                    cout<<"\n\n Number of room we had:"<<qroom;
                    cout<<"\n\n Number of room we sell:"<<sroom;
                    cout<<"\n\n Remaining room"<<qroom-sroom;
                    cout<<"\n\n Total room collection in one day:"<<troom;

                    cout<<"\n\n Number of idly we had:"<<qidly;
                    cout<<"\n\n Number of idly we sell:"<<sidly;
                    cout<<"\n\n Remaining room"<<qidly-sidly;
                    cout<<"\n\n Total idly collection in one day:"<<tidly;

                    
                    cout<<"\n\n Number of dosa we had:"<<qdosa;
                    cout<<"\n\n Number of dosa we sell:"<<sdosa;
                    cout<<"\n\n Remaining dosa"<<qdosa-sdosa;
                    cout<<"\n\n Total dosa collection in one day:"<<tdosa;

                    
                    cout<<"\n\n Number of poori we had:"<<qpoori;
                    cout<<"\n\n Number of poori we sell:"<<spoori;
                    cout<<"\n\n Remaining poori"<<qpoori-spoori;
                    cout<<"\n\n Total poori collection in one day:"<<tpoori;

                    
                    cout<<"\n\n Number of pongal we had:"<<qpongal;
                    cout<<"\n\n Number of pongal we sell:"<<spongal;
                    cout<<"\n\n Remaining pongal"<<qpongal-spongal;
                    cout<<"\n\n Total pongal collection in one day:"<<tpongal;

                    
                    cout<<"\n\n Number of vada we had:"<<qvada;
                    cout<<"\n\n Number of vada we sell:"<<svada;
                    cout<<"\n\n Remaining vada"<<qvada-svada;
                    cout<<"\n\n Total vada collection in one day:"<<tvada;

                    
                    cout<<"\n\n Number of tea we had:"<<qtea;
                    cout<<"\n\n Number of tea we sell:"<<stea;
                    cout<<"\n\n Remaining tea"<<qtea-stea;
                    cout<<"\n\n Total tea collection in one day:"<<ttea;

                    
                    cout<<"\n\n Number of coffee we had:"<<qcoffee;
                    cout<<"\n\n Number of coffee we sell:"<<scoffee;
                    cout<<"\n\n Remaining coffee"<<qcoffee-scoffee;
                    cout<<"\n\n Total coffee collection in one day:"<<tcoffee;
            case 10:
                exit(0);
                default:
                    cout<<"\n Please select number mentioned in above";
            goto(m);

                    
    }
}
}