//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface HKOAuth2AuthorizationSession : NSObject <NSCopying, NSSecureCoding>
{
    NSURL *_authorizationURL;
    NSString *_query;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, copy, nonatomic) NSURL *authorizationURL; // @synthesize authorizationURL=_authorizationURL;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAuthorizationURL:(id)arg1 query:(id)arg2;
- (id)init;

@end

