//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUImageLayout.h>

@interface _NUContiguousImageLayout : NUImageLayout
{
}

- (CDStruct_912cb5d2)tileCounts;
- (CDStruct_912cb5d2)borderSize;
- (CDStruct_912cb5d2)tileSize;
- (void)enumerateTilesForWritingInRect:(CDStruct_996ac03c)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateTilesForReadingInRect:(CDStruct_996ac03c)arg1 withBlock:(CDUnknownBlockType)arg2;
- (long long)tileIndexAtPoint:(CDStruct_912cb5d2)arg1;
- (id)tileInfoAtIndex:(long long)arg1;
- (CDStruct_996ac03c)contentRectForTileAtIndex:(long long)arg1;
- (CDStruct_996ac03c)frameRectForTileAtIndex:(long long)arg1;
- (long long)tileCount;

@end
