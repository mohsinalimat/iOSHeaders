//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CATTaskRequest.h"

@class DMFControlGroupIdentifier, NSArray, NSData, NSDictionary, NSString;

@interface CRKShareRequest : CATTaskRequest
{
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_targetType;
    NSString *_targetIdentifier;
    NSArray *_urls;
    NSString *_shareDescription;
    NSData *_previewImageData;
    NSDictionary *_sandboxExtensions;
    NSString *_sourceBundleIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(retain, nonatomic) NSDictionary *sandboxExtensions; // @synthesize sandboxExtensions=_sandboxExtensions;
@property(retain, nonatomic) NSData *previewImageData; // @synthesize previewImageData=_previewImageData;
@property(copy, nonatomic) NSString *shareDescription; // @synthesize shareDescription=_shareDescription;
@property(copy, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) NSString *targetIdentifier; // @synthesize targetIdentifier=_targetIdentifier;
@property(copy, nonatomic) NSString *targetType; // @synthesize targetType=_targetType;
@property(copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

