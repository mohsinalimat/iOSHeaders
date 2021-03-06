//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPModelSocialPerson, NSArray, NSData, NSString;

@protocol MPStoreSocialRequestOperationDataSource <NSObject>
@property(retain, nonatomic) MPModelSocialPerson *person;
- (NSArray *)queryItems;
- (long long)httpMethod;
- (long long)httpBodyType;
- (NSData *)httpBody;
- (NSString *)bagKey;

@optional
- (NSString *)fallbackURLString;
- (NSArray *)fallbackBagKeys;
@end

