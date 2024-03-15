#ifndef FIRMWARE_H
#define FIRMWARE_H

/**
 * @file Firmware.h
 * @brief this is the file for testing
 * @author Pradip Mahajan
 * @date 09/03/2024
 */

/// Include required library
#include<string.h>                          /// Library for string functions such as strlen
#include<stdint.h>                          /// used for uint8_t, uint16_t
#include<stdio.h>                           /// Standard input/output
#include <Windows.h>                        /// windows header file for communicate on serial

/// Macros Command to send the receiver
#define     AT_CMD              "AT\r\n"        /// Command for established communication
#define     ATI_CMD             "ATI\r\n"       /// Command to disable echo mode
#define     SEND_SYNC           "SYNC\r\n"      /// String for sending 

/// Timeout, retry and Size
#define     RESP_ARRAY          128             /// Receiver Buffer to strore received bytes
#define     MAX_RESP_TIMEOUT    1000            /// Waiting time for read response
#define     RESP_RETRY          5               /// Maximum number of retries
#define     PACKET_SIZE         2048             /// Size of packets

/// @brief This is the CACERT 
const char *caCert = "-----BEGIN CERTIFICATE-----\n"
    "jdfjkkdfbkfdjvffvdfvfvvfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n"
    "dfbjhdfvbhhbhjfdvbuyhbhjjb0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n"
    "b24gUm9vdCBDQSfdfvXDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n"
    "MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n"
    "b3QgQ0EgMTCCASIwDQYJKoZddfcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n"
    "ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n"
    "9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n"
    "IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n"
    "VOujw5H5SNz/0dhfbhbdfuvhbhfvbjhbdjfvhbjhbfvhjbjdhfbhjbv08p8kDi1L\n"
    "93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n"
    "jgSubJrdfvdfvvdfkjnjkfnvvkjnkjfnvkjnkjnwAwEB/zAOBgNVHQ8BAf8EBAMC\n"
    "AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n"
    "A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n"
    "U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n"
    "N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n"
    "o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n"
    "5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n"
    "rqdvhhfvuhidufhvuhdfiuvhifv\n"
    "-----END CERTIFICATE-----\n";

/// Response return
/// @brief Response returns RESP_OK=0, RESP_ERROR=1, RESP_TIMEOUT=2, RESP_FAILED=3
typedef enum{
    RESP_OK,
    RESP_ERROR,
    RESP_TIMEOUT,
    RESP_FAILED
}gsmResp_t;

/// @brief Structure of metadata
struct metaData_t{
    uint8_t startByte;
    uint16_t noOfBytes;
    uint16_t noOfPkts;
    uint8_t cert[PACKET_SIZE];
    uint8_t firmVer;
    uint8_t stopByte;
};

/// @brief Function to send the sync command to the receiver
/// @param sendString command 
/// @return Response 
///         returns RESP_OK=0, 
///         RESP_ERROR=1, 
///         RESP_TIMEOUT=2, 
///         RESP_FAILED=3
gsmResp_t SendSync(const char *sendString);


#endif