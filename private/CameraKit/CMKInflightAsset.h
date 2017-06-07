//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface CMKInflightAsset : NSObject
{
    _Bool _isVideo;
    _Bool __didPersistAvalanche;
    _Bool __hasPendingAvalanchePersistenceUpdate;
    short _visibilityState;
    int _avalanchePickType;
    NSString *_uuid;
    NSString *_directory;
    NSString *_filename;
    NSDate *_dateCreated;
    long long _deviceOrientationDuringCapture;
    long long _captureDeviceDuringCapture;
    NSString *_avalancheUUID;
}

@property(readonly, nonatomic) _Bool _hasPendingAvalanchePersistenceUpdate; // @synthesize _hasPendingAvalanchePersistenceUpdate=__hasPendingAvalanchePersistenceUpdate;
@property(readonly, nonatomic) _Bool _didPersistAvalanche; // @synthesize _didPersistAvalanche=__didPersistAvalanche;
@property(nonatomic) short visibilityState; // @synthesize visibilityState=_visibilityState;
@property(nonatomic) int avalanchePickType; // @synthesize avalanchePickType=_avalanchePickType;
@property(retain, nonatomic) NSString *avalancheUUID; // @synthesize avalancheUUID=_avalancheUUID;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) long long captureDeviceDuringCapture; // @synthesize captureDeviceDuringCapture=_captureDeviceDuringCapture;
@property(nonatomic) long long deviceOrientationDuringCapture; // @synthesize deviceOrientationDuringCapture=_deviceOrientationDuringCapture;
@property(retain, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) NSString *directory; // @synthesize directory=_directory;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)_persistAvalancheToFilesystem;
- (void)_avalanchePersistenceStateDidChange;
- (id)pathForVideoFile;
- (id)pathForImageFile;
- (id)pathForOriginalFile;
- (id)mainFileURL;
- (id)init;

@end

