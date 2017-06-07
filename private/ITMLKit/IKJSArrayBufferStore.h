//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKAppContext, NSMutableDictionary;

@interface IKJSArrayBufferStore : NSObject
{
    NSMutableDictionary *_bufferStorage;
    IKAppContext *_appContext;
}

@property(readonly, nonatomic) IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(readonly, nonatomic) NSMutableDictionary *bufferStorage; // @synthesize bufferStorage=_bufferStorage;
- (void).cxx_destruct;
- (id)arrayBufferForData:(id)arg1;
- (id)initWithAppContext:(id)arg1;

@end

