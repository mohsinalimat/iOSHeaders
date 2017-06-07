//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/BKSAccelerometerDelegate-Protocol.h>

@class BKSAccelerometer, NSMutableSet, NSString;
@protocol CKDeviceOrientationManagerDelegate;

@interface CKDeviceOrientationManager : NSObject <BKSAccelerometerDelegate>
{
    id <CKDeviceOrientationManagerDelegate> _delegate;
    BKSAccelerometer *_accelerometer;
    NSMutableSet *_listenerKeys;
}

@property(retain, nonatomic) NSMutableSet *listenerKeys; // @synthesize listenerKeys=_listenerKeys;
@property(retain, nonatomic) BKSAccelerometer *accelerometer; // @synthesize accelerometer=_accelerometer;
@property(nonatomic) __weak id <CKDeviceOrientationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_broadcastOrientation:(long long)arg1;
- (long long)_springboardDeviceLockOrientation;
- (void)_updateListeningState;
- (_Bool)_wantsOrientationEvents;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)invalidate;
@property(readonly, nonatomic) long long currentDeviceOrientation;
@property(readonly, nonatomic, getter=isListeningForOrientationEvents) _Bool listeningForOrientationEvents;
- (void)endListeningForOrientationEventsWithKey:(id)arg1;
- (void)beginListeningForOrientationEventsWithKey:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

