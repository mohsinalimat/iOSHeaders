//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VSApplicationControllerRequest : NSObject
{
    long long _type;
    NSString *_authenticationToken;
    NSString *_SAMLRequest;
    NSArray *_attributeNames;
    NSString *_requestorVerificationToken;
}

@property(copy, nonatomic) NSString *requestorVerificationToken; // @synthesize requestorVerificationToken=_requestorVerificationToken;
@property(copy, nonatomic) NSArray *attributeNames; // @synthesize attributeNames=_attributeNames;
@property(copy, nonatomic) NSString *SAMLRequest; // @synthesize SAMLRequest=_SAMLRequest;
@property(copy, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

