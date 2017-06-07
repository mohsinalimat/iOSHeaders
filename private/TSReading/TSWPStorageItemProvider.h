//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/UIItemProviderWriting-Protocol.h>

@class NSArray, NSString;

@interface TSWPStorageItemProvider : NSObject <UIItemProviderWriting>
{
    NSString *_string;
}

+ (id)writableTypeIdentifiersForItemProvider;
+ (id)storageItemProviderWithString:(id)arg1;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_loadPlainTextData:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@end
