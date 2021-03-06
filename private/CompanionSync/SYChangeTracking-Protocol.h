//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CompanionSync/NSObject-Protocol.h>

@class NSDictionary;
@protocol SYObject;

@protocol SYChangeTracking <NSObject>
- (void)deleteObject:(id <SYObject>)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)updateObject:(id <SYObject>)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)addObject:(id <SYObject>)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)deleteObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2 idsOptions:(NSDictionary *)arg3;
- (void)updateObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2 idsOptions:(NSDictionary *)arg3;
- (void)addObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2 idsOptions:(NSDictionary *)arg3;
- (void)deleteObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2;
- (void)updateObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2;
- (void)addObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2;
- (void)deleteObject:(id <SYObject>)arg1;
- (void)updateObject:(id <SYObject>)arg1;
- (void)addObject:(id <SYObject>)arg1;
@end

