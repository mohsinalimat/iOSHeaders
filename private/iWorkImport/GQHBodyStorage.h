//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/GQBodyStorageGenerator-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQHBodyStorage : NSObject <GQBodyStorageGenerator>
{
}

+ (int)handleTocEntry:(id)arg1 state:(id)arg2;
+ (int)handleTocContent:(id)arg1 state:(id)arg2;
+ (int)handleBodyStorage:(id)arg1 state:(id)arg2;
+ (int)handleContainerHint:(id)arg1 state:(id)arg2;
+ (int)handleFootnotes:(id)arg1 state:(id)arg2;
+ (int)handleLayout:(id)arg1 state:(id)arg2;
+ (int)handlePageStart:(id)arg1 state:(id)arg2;
+ (int)handleSection:(id)arg1 state:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

