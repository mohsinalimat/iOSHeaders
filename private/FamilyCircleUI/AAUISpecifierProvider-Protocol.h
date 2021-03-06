//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class AAUIAccountManager, NSArray, NSDictionary;
@protocol AAUISpecifierProviderDelegate;

@protocol AAUISpecifierProvider <NSObject>
@property(copy, nonatomic) NSArray *specifiers;
@property(nonatomic) __weak id <AAUISpecifierProviderDelegate> delegate;
- (id)initWithAccountManager:(AAUIAccountManager *)arg1;

@optional
- (_Bool)handleURL:(NSDictionary *)arg1;
@end

