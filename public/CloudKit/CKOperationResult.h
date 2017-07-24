//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKOperationMetrics, NSError, NSString;

@interface CKOperationResult : NSObject <NSSecureCoding>
{
    NSString *_operationID;
    NSError *_error;
    CKOperationMetrics *_metrics;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) CKOperationMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;

@end

