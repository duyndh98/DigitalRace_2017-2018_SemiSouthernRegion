#include <stdio.h>
#include "api_lane_detection.h"


main( int argc, char** argv )
{
	

/*
    string videoFileName = argv[1];

    cout<< "Opening File: "<< videoFileName << endl<< flush;

    cv::VideoCapture video;

    bool isOpenVideo = video.open(videoFileName);
    //bool isOpenVideo = video.open(0);

    if(!isOpenVideo)
    {
        cout<< "Can not read image" << endl<< flush;
        return 1;
    }

*/
	Lane_Detector rc;
    cv::Mat imgInput=imread("source/image_1.jpg");
    cv::Mat imgGray;
	cvtColor(imgInput,imgGray,CV_BGR2GRAY);
	Point pC;
	rc.Detect_Not_Lane(imgGray,pC);
    //MSAC msac;
    cv::Rect roi = cv::Rect(0, VIDEO_FRAME_HEIGHT*3/4,
                            VIDEO_FRAME_WIDTH, VIDEO_FRAME_HEIGHT/4);

    //api_vanishing_point_init( msac );

    char key = 0;

    double st = 0, et = 0, fps = 0;
    double freq = getTickFrequency();

    vector< Point > points;
    int max_size = 5;
	


	//int num_image = 0;
/*    while(true)
    {
	
        video.read( imgInput );

        if(imgInput.empty())
        {
            cout<< "Can not read image" << endl;
            break;
        }
	
        // Convert to gray
        cv::cvtColor(imgInput, imgGray, CV_BGR2GRAY);
		
        st = getTickCount();

        Point vp;
	
*/
	//sr.Detect_Not_Lane(imgGray,vp);
	//circle(imgInput,vp,3,Scalar(255,0,0));
	//imshow("Color Img",imgInput);
        //api_get_vanishing_point( imgGray, roi, msac, vp, true, "Canny");
/*
        if( points.size() <= max_size )
        {
            points.push_back(vp);
        }
        if( points.size() > max_size )
        {
            points.erase(points.begin(), points.begin() + 1);

            for( int i = 0; i < points.size()-1; i++ )
            {

            }
        }

        et = getTickCount();

        fps = 1.0 / ((et-st)/freq);
        cout<< endl<< "FPS: "<< fps<< flush;

        cout<< endl<< "VP: "<< vp<< flush;

//        imshow("input", imgGray );

        key = waitKey(0);

        if( key == 27 ) break;



    }
*/
	waitKey(0);
    return 0;
}

