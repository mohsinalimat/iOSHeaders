//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

__attribute__((visibility("hidden")))
@interface CKDModifyBadgeURLRequest : CKDURLRequest
{
    unsigned long long _badgeValue;
}

@property(readonly, nonatomic) unsigned long long badgeValue; // @synthesize badgeValue=_badgeValue;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithBadgeValue:(unsigned long long)arg1;

@end

