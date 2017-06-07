//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TIKeyboardLayoutFactory : NSObject
{
    void *_layoutsLibraryHandle;
    NSMutableDictionary *_internalCache;
}

+ (id)layoutsFileName;
+ (id)sharedKeyboardFactory;
@property(retain) NSMutableDictionary *internalCache; // @synthesize internalCache=_internalCache;
@property(readonly, nonatomic) void *layoutsLibraryHandle; // @synthesize layoutsLibraryHandle=_layoutsLibraryHandle;
- (id)keyboardPrefixForWidth:(double)arg1 andEdge:(_Bool)arg2;
- (id)keyboardWithName:(id)arg1 inCache:(id)arg2;
- (id)init;
- (void)dealloc;

@end

