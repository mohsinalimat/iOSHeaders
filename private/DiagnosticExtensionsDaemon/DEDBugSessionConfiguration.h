//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/NSCopying-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface DEDBugSessionConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _allowsCellularUpload;
    long long _finishingMove;
    NSString *_seedingDeviceToken;
    long long _seedingSubmissionID;
    long long _seedingSubmissionType;
    long long _seedingEnvironment;
    NSString *_seedingHost;
    NSNumber *_radarProblemID;
    NSString *_radarAuthToken;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSString *radarAuthToken; // @synthesize radarAuthToken=_radarAuthToken;
@property(retain) NSNumber *radarProblemID; // @synthesize radarProblemID=_radarProblemID;
@property(retain) NSString *seedingHost; // @synthesize seedingHost=_seedingHost;
@property long long seedingEnvironment; // @synthesize seedingEnvironment=_seedingEnvironment;
@property long long seedingSubmissionType; // @synthesize seedingSubmissionType=_seedingSubmissionType;
@property long long seedingSubmissionID; // @synthesize seedingSubmissionID=_seedingSubmissionID;
@property(retain) NSString *seedingDeviceToken; // @synthesize seedingDeviceToken=_seedingDeviceToken;
@property _Bool allowsCellularUpload; // @synthesize allowsCellularUpload=_allowsCellularUpload;
@property long long finishingMove; // @synthesize finishingMove=_finishingMove;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

