//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class NSArray, NSDictionary;

@protocol CKPickerBarView <NSObject>
@property(copy, nonatomic) NSArray *acknowledgmentViews;
- (void)performCancelAnimation:(void (^)(void))arg1;
- (void)performSendAnimation:(void (^)(void))arg1;
- (void)performSelectedAnimation:(void (^)(void))arg1;
- (void)performShowAnimation:(void (^)(void))arg1;
- (id)initWithGroupCounts:(NSDictionary *)arg1 selectedType:(long long)arg2 orientation:(BOOL)arg3;
@end

