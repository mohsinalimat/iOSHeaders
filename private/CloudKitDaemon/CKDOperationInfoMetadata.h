//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKOperationInfo, NSDate, NSNumber;

@interface CKDOperationInfoMetadata : NSObject
{
    CKOperationInfo *_operationInfo;
    NSDate *_lastAttemptDate;
    NSNumber *_retryNumber;
}

@property(retain, nonatomic) NSNumber *retryNumber; // @synthesize retryNumber=_retryNumber;
@property(retain, nonatomic) NSDate *lastAttemptDate; // @synthesize lastAttemptDate=_lastAttemptDate;
@property(retain, nonatomic) CKOperationInfo *operationInfo; // @synthesize operationInfo=_operationInfo;
- (void).cxx_destruct;

@end

