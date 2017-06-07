//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface UMUserSwitchContext : NSObject
{
    _Bool _secondaryActionRequired;
    NSData *_setupData;
    NSString *_shortLivedToken;
}

+ (id)contextWithDataRepresentation:(id)arg1;
+ (id)contextWithSetupData:(id)arg1 shortLivedToken:(id)arg2 secondaryActionRequired:(_Bool)arg3;
@property(nonatomic) _Bool secondaryActionRequired; // @synthesize secondaryActionRequired=_secondaryActionRequired;
@property(copy, nonatomic) NSString *shortLivedToken; // @synthesize shortLivedToken=_shortLivedToken;
@property(copy, nonatomic) NSData *setupData; // @synthesize setupData=_setupData;
- (void).cxx_destruct;
- (id)description;
- (id)dataRepresentation;
- (id)dictRepresentation;

@end

