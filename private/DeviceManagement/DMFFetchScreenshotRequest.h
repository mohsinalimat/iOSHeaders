//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface DMFFetchScreenshotRequest : CATTaskRequest
{
    unsigned long long _maxWidth;
    unsigned long long _maxHeight;
    NSString *_sessionToken;
}

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(copy, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(nonatomic) unsigned long long maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) unsigned long long maxWidth; // @synthesize maxWidth=_maxWidth;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

