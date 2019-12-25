//stl
#include <iostream>
//pcl
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
#include <pcl/visualization/cloud_viewer.h>

//opencv
#include <opencv2/opencv.hpp> 

//boost
#include <boost/timer.hpp>

int main(int argc, char *argv[])
{
	boost::timer t;

	pcl::PointCloud<pcl::PointXYZ>::Ptr  cloud (new pcl::PointCloud<pcl::PointXYZ>);
	if (pcl::io::loadPCDFile<pcl::PointXYZ>("/home/xuan/hi-there/data/bun0.pcd", *cloud) == -1)
	{
		std::cout << "cloud load failed" << std::endl;
		return (-1);
	}
	else
	{
		std::cout << "cloud load success" << std::endl; 
	}
	
    cv::Mat frame = cv::imread("../data/lab.png");
	cv::imshow("school_lab",frame);
    std::cout << "press kong ge to release " << std::endl;
	cv::waitKey(0);
    
    std::cout << "check pcl/opencv/boost libs use " << t.elapsed()/1000.0 << "s" << std::endl;

	return (0);
}

