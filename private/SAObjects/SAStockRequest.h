//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSDate, NSString;

@interface SAStockRequest : SADomainObject
{
}

+ (id)requestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)request;
@property(copy, nonatomic) NSDate *startDate;
@property(copy, nonatomic) NSString *requestType;
@property(copy, nonatomic) NSDate *endDate;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

