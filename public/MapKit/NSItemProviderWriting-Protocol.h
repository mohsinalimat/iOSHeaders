//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class NSArray, NSProgress, NSString;

@protocol NSItemProviderWriting <NSObject>
+ (NSArray *)writableTypeIdentifiersForItemProvider;
- (NSProgress *)loadDataWithTypeIdentifier:(NSString *)arg1 forItemProviderCompletionHandler:(void (^)(NSData *, NSError *))arg2;

@optional
+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(NSString *)arg1;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(NSString *)arg1;
@end

