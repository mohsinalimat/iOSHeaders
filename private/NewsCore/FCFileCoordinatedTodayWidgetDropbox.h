//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayWidgetDropbox : NSObject
{
    FCFileCoordinatedDictionary *_fileCoordinatedDictionary;
}

@property(retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary; // @synthesize fileCoordinatedDictionary=_fileCoordinatedDictionary;
- (void).cxx_destruct;
- (void)depositWithAccessor:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)peekWithAccessor:(CDUnknownBlockType)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)init;

@end

