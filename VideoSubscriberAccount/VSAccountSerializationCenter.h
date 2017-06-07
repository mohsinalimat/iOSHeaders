//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSUndoManager, VSAccountChannelsCenter, VSAccountStore;

@interface VSAccountSerializationCenter : NSObject
{
    NSOperationQueue *_serializationQueue;
    VSAccountStore *_accountStore;
    VSAccountChannelsCenter *_accountChannelsCenter;
}

+ (id)defaultSerializationCenter;
@property(retain, nonatomic) VSAccountChannelsCenter *accountChannelsCenter; // @synthesize accountChannelsCenter=_accountChannelsCenter;
@property(retain, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) NSOperationQueue *serializationQueue; // @synthesize serializationQueue=_serializationQueue;
- (void).cxx_destruct;
- (id)importData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)exportDataWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSUndoManager *undoManager;
- (id)init;

@end
