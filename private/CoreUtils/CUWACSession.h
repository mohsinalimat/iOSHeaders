//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUWiFiDevice, EasyConfigDevice, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CUWACSession : NSObject
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    struct LogCategory *_ucat;
    int _saveOriginalWiFiState;
    NSDictionary *_originalWiFiInfo;
    int _joinSoftAPState;
    double _joinSoftAPStartTime;
    EasyConfigDevice *_easyConfigDevice;
    int _easyConfigPreConfigState;
    struct {
        double startTime;
        unsigned char userChangedFriendlyName;
        unsigned char playPasswordSet;
        unsigned char adminPasswordSet;
        unsigned char destinationNetworkRecommendationUsed;
        double secondsToGetLinkUpOnSWAP;
        int wifiJoinSWAPError;
        unsigned char hitJoiningTargetSWAPTimeout;
        int rssiOfSWAP;
        unsigned int snrOfSWAP;
        unsigned int channelOfSWAP;
    } _easyConfigPreConfigMetrics;
    int _restoreOriginalWiFiState;
    double _restoreStartTime;
    int _easyConfigPostConfigState;
    struct {
        double secondsToGetLinkUpOnDestination;
        int wifiJoinDestinationAPError;
        unsigned char destinationNetworkPSKInKeychain;
        unsigned char hitJoiningDestinationAPTimeout;
        int rssiOfDestinationAP;
        unsigned int snrOfDestinationAP;
        unsigned int channelOfDestinationAP;
    } _easyConfigPostConfigMetrics;
    int _finishState;
    NSString *_configuration;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    CDUnknownBlockType _progressHandler;
    CUWiFiDevice *_wacDevice;
}

@property(retain, nonatomic) CUWiFiDevice *wacDevice; // @synthesize wacDevice=_wacDevice;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_runFinishRestored:(int)arg1;
- (int)_runFinish;
- (int)_runEasyConfigPostConfig;
- (void)_runRestoreOriginalWiFiFinished:(int)arg1;
- (void)_runRestoreOriginalWiFiStart;
- (int)_runRestoreOriginalWiFi;
- (void)_runEasyConfigProgress:(int)arg1 info:(id)arg2;
- (void)_runEasyConfigPreConfigStart;
- (int)_runEasyConfigPreConfig;
- (void)_runJoinSoftAPFinished:(int)arg1;
- (void)_runJoinSoftAPStart;
- (int)_runJoinSoftAP;
- (int)_runSaveOriginalWiFi;
- (void)_run;
- (void)_progress:(unsigned int)arg1 info:(id)arg2;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

