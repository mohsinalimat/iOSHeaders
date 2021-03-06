//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSTTableHeaderInfo;

@protocol TSTTableHeaderStorage <NSObject>
- (unsigned int)lowerBound:(unsigned int)arg1;
- (unsigned int)upperBound:(unsigned int)arg1;
- (unsigned int)maxKey;
- (unsigned int)minKey;
- (long long)count;
- (void)shiftKeysAtIndex:(unsigned int)arg1 amount:(int)arg2;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2 willModify:(_Bool)arg3;
- (void)makeHeadersPerformSelector:(SEL)arg1 willModify:(_Bool)arg2;
- (void)removeAllHeaders;
- (void)removeHeaderForKey:(unsigned int)arg1;
- (void)setHeader:(TSTTableHeaderInfo *)arg1 forKey:(unsigned int)arg2;
- (TSTTableHeaderInfo *)headerForKey:(unsigned int)arg1 willModify:(_Bool)arg2 createIfNotThere:(_Bool)arg3;
- (TSTTableHeaderInfo *)headerForKey:(unsigned int)arg1 willModify:(_Bool)arg2;
@end

