//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class TSDLayout;
@protocol TSDHint;

@protocol TSDPartitioner
- (id <TSDHint>)hintForLayout:(TSDLayout *)arg1;
- (_Bool)didHint:(id <TSDHint>)arg1 syncWithNextHint:(id <TSDHint>)arg2 horizontally:(_Bool)arg3 delta:(int)arg4;
- (TSDLayout *)layoutForHint:(id <TSDHint>)arg1 parentLayout:(TSDLayout *)arg2;
- (id <TSDHint>)nextHintForSize:(struct CGSize)arg1 parentLayout:(TSDLayout *)arg2 previousHint:(id <TSDHint>)arg3 horizontally:(_Bool)arg4 outFinished:(out _Bool *)arg5;
- (TSDLayout *)nextLayoutForSize:(struct CGSize)arg1 parentLayout:(TSDLayout *)arg2 previousHint:(id <TSDHint>)arg3 horizontally:(_Bool)arg4 outFinished:(out _Bool *)arg5;

@optional
- (void)reset;
@end

