#include "KalmanFilter.h"

using namespace Eigen;

class KalmanFilter {
    public: 

    double total_t;
    double tstep;
    VectorXd s_vec; // state vector
    VectorXd u_vec; // input vector
    MatrixXd R; // Measurement Noise Covariance Matrix
    MatrixXd P; // State Estimation Error Covariance Matrix
    MatrixXd F; // State Transition Matrix
    MatrixXd H; // Observation Matrix
    MatrixXd Q; // Process Noise Matrix
    MatrixXd G; // Input Transition Marix

    // Constructor
    KalmanFilter(double total_t, double tstep, VectorXd s_vec_in, VectorXd u_vec_in, MatrixXd R_in, MatrixXd P_in,
         MatrixXd F_in, MatrixXd H_in, MatrixXd Q_in, MatrixXd G_in){
        s_vec = s_vec_in;
        u_vec = u_vec_in;
        R = R_in;
        P = P_in;
        F = F_in;
        H = H_in;
        Q = Q_in;
        G = G_in;
    }

    // Will track one target from chosen num
    void BasicKF(std::vector<int> indicies){
        if (s_vec.size() != 2){
            std::cout << "Invalid for Basic Kalman Filter Maxxing" << std::endl;
            return;
        }

        Vector2d bs_vec = s_vec(indicies);
        Vector2d bu_vec = u_vec(indicies);
        MatrixXd bR = R(indicies, indicies);
        MatrixXd bP = P(indicies, indicies);
        MatrixXd bF = F(indicies, indicies);
        MatrixXd bQ = F(indicies, indicies);

        for (int t = 0; t<total_t; t++){

        }
    }
};