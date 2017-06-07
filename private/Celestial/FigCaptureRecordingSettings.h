//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Celestial/NSCopying-Protocol.h>
#import <Celestial/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface FigCaptureRecordingSettings : NSObject <NSSecureCoding, NSCopying>
{
    long long _settingsID;
    NSURL *_outputURL;
    NSString *_outputFileType;
    CDStruct_1b6d18a9 _maxDuration;
    long long _maxFileSize;
    long long _minFreeDiskSpaceLimit;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long minFreeDiskSpaceLimit; // @synthesize minFreeDiskSpaceLimit=_minFreeDiskSpaceLimit;
@property(nonatomic) long long maxFileSize; // @synthesize maxFileSize=_maxFileSize;
@property(nonatomic) CDStruct_1b6d18a9 maxDuration; // @synthesize maxDuration=_maxDuration;
@property(copy, nonatomic) NSString *outputFileType; // @synthesize outputFileType=_outputFileType;
@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(nonatomic) long long settingsID; // @synthesize settingsID=_settingsID;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

