//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (BaseBoard)
- (id)bs_flattenedDifferenceWithArray:(id)arg1;
- (id)bs_differenceWithArray:(id)arg1;
- (id)bs_mapNoNulls:(CDUnknownBlockType)arg1;
- (id)bs_map:(CDUnknownBlockType)arg1;
- (id)bs_flatten;
- (id)bs_reverse;
- (id)bs_objectsOfClass:(Class)arg1;
- (id)bs_filter:(CDUnknownBlockType)arg1;
- (id)bs_firstObjectOfClassNamed:(id)arg1;
- (id)bs_firstObjectOfClass:(Class)arg1;
- (id)bs_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)bs_first:(unsigned long long)arg1;
- (void)bs_enumerateObjectsOfClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)bs_each:(CDUnknownBlockType)arg1;
- (_Bool)bs_containsObjectPassingTest:(CDUnknownBlockType)arg1;
@end

