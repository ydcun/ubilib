#include "fft.c"
#include "features.c"
int main()
{


    double data[] = {9.026040739100146,9.026040739100146,11.8979059184542,12.90187734763108,12.90187734763108,13.15664844374318,13.15664844374318,9.833494049937032,9.833494049937032,7.875690965653628,7.875690965653628,7.875690965653628,7.875690965653628,8.956260243369503,8.956260243369503,10.087073118903673,10.087073118903673,12.134755202912807,12.134755202912807,13.435246651688685,13.435246651688685,12.025763044281641,12.025763044281641,9.099646503103976,8.353252674016382,8.353252674016382,8.353252674016382,8.892752746187243,8.892752746187243,10.896820071105015,10.896820071105015,11.258929532912155,11.258929532912155,12.425955653699917,12.425955653699917,9.987091736454916,9.987091736454916,9.408611383037917,9.408611383037917,9.408611383037917,9.408611383037917,8.79075220923112,8.79075220923112,9.644847960718714,9.644847960718714,10.72033822371535,10.72033822371535,10.72033822371535,14.96355148692199,14.96355148692199,14.619533393453326,14.619533393453326,10.297907983972173,10.297907983972173,8.65082240374204,8.65082240374204,8.1792572802927,8.1792572802927,8.600404199644062,8.600404199644062,11.028518692422685,11.028518692422685,15.10651842468504,15.10651842468504,12.989601250783304,12.989601250783304,9.94402038880543,9.94402038880543,9.94402038880543,7.925848858608055,7.925848858608055,8.00462362354507,8.00462362354507,11.068442663390043,11.068442663390043,13.505560215785003,13.505560215785003,13.415407000046173,13.415407000046173,11.655146397020932,11.655146397020932,9.312643104864689,9.312643104864689,9.312643104864689,6.995455770184878,6.995455770184878,8.474594759664749,8.474594759664749,10.740616821648693,10.740616821648693,13.808283559206567,13.808283559206567,13.756655973859896,13.756655973859896,10.684666110828209,10.684666110828209,10.684666110828209,10.684666110828209,8.858606607117832,8.858606607117832,7.510137027580387,7.510137027580387,9.419846930110307,9.419846930110307,13.425920610875849,13.425920610875849,13.425920610875849,14.153645282027828,14.153645282027828,12.072373646349064,12.072373646349064,10.960306412685094,10.960306412685094,7.418980617572254,7.418980617572254,7.418980617572254,7.04808230770286,9.90332610037322,9.90332610037322,14.587293167192515,14.587293167192515,14.10972963398809,14.10972963398809,10.006262230216443,10.006262230216443,10.006262230216443,10.006262230216443,8.140998129295399};
    int length = sizeof(data)/sizeof(double);

    double* ffts ;
    ffts= fftMe(data,length);
    printf("%d\n",ffts[0]);

    //double fftData[] ={0.19826318217133326,0.27598299177390734,0.061985235341731906,0.10177152598633678,0.4094681289568995,0.28784177198010175,0.41756160039245716,0.8193562485147875,2.459752150499544,0.5021451982955583,0.8278948227916979,0.0662495578775843,0.4068012996500487,0.23101277147194527,0.10911254812114936,0.16030627812380518,0.17264525286090035,0.522845391344978,0.1546961746076571,0.16972273869731877,0.14987782420883808,0.29633454218963245,0.02893409213845974,0.10835571795354203,0.09217703346530864,0.12651077424486093,0.22124353538472685,0.06473134530559851,0.054182590198332374,0.06686451528106559,0.1318103247940588,0.03724644807154641,0.10789698703817795,0.1345046383184108,0.0884758256350896,0.19349156934998776,0.04343665370667711,0.019526881389262923,0.05194001696891542,0.08687247660807121,0.07007352753980595,0.02935111935690056,0.1498975380678358,0.024351750232319686,0.3188199381842519,0.06337053646082363,0.09278524963149136,0.17274369114011642,0.1692679877757285,0.16544655439205466,0.11123944227021876,0.29240899042185375,0.21091289755236542,0.26562420015065,0.09990396276447228,0.090169036570215,0.028262986822265797,0.2557381142316687,0.17438769667600396,0.05650580848453202,0.07139238097076014,0.024801400568375074,0.09712936129633631,0.09338398939535963};
    //int length2 = sizeof(fftData)/sizeof(double);
    int length2 = length/2;

    printf("时域 最小值minimum=%.10f\n",minimum(data,length));
    printf("时域 最大值maximum=%.10f\n",maximum(data,length));
    printf("时域 方差variance=%.10f\n",variance(data,length));
    printf("时域 过均值率minimum=%.10f\n",minimum(data,length));
    printf("时域 标准差standardDeviation=%.10f\n",standardDeviation(data,length));
    printf("时域 平均值mean=%.10f\n",mean(data,length));
    printf("时域 向量幅值signalVectorMagnitude=%.10f\n",signalVectorMagnitude(data,length));
    printf("时域 四分位数1/4firstQuartile=%.10f\n",firstQuartile(data,length));
    printf("时域 四分位数3/4thirdQuartile=%.10f\n",thirdQuartile(data,length));
    printf("时域 过零率zeroCrossingRate=%.10f\n",zeroCrossingRate(data,length));
    printf("时域 中位数median=%.10f\n",median(data,length));
    printf("时域 均方根平均值rms=%.10f\n",rms(data,length));
    printf("时域 向量幅值面积sma=%.10f\n",sma(data,length,1/32.0));
    printf("时域 四分位距iqr=%.10f\n",iqr(data,length));
    printf("时域 绝对平均差mad=%.10f\n",mad(data,length));
    printf("时域 能量tenergy=%.10f\n\n",tenergy(data,length));

    printf("频域 谱峰位置spp=%.10f\n",spp(ffts,length2));
    printf("频域 能量energy=%.10f\n",energy(ffts,length2));
    printf("频域 熵entropy=%.10f\n",entropy(ffts,length2));
    printf("频域 质心centroid=%.10f\n",centroid(ffts,length2));
    printf("频域 标准备差fdev=%.10f\n",fdev(ffts,length2));
    printf("频域 平均值fmean=%.10f\n",fmean(ffts,length2));
    printf("频域 偏度skew=%.10f\n",skew(ffts,length2));
    printf("频域 峰度kurt=%.10f\n",kurt(ffts,length2));
    return 0;
}