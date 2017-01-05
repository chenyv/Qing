#ifndef QING_COMMON_H
#define QING_COMMON_H

//unix related
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>

//c header
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <wchar.h>

//C++ header
#include <fstream>
#include <iostream>
#include <iomanip>
#include <map>
#include <queue>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <limits>
#include <bitset>
using namespace std;

//OpenCV header
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/calib3d/calib3d.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;

//PCL header
#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/point_types.h>
#include <pcl/filters/voxel_grid.h>

#define DOUBLE_MAX 1e10

#endif
