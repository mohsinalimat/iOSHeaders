//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (SCNExtensions)
- (id)scn_indexedDataDecodingTrianglePairsWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataEncodingTrianglePairsWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataDecodingDeltaWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataEncodingDeltaWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataDecodingHighWatermarkWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataEncodingHighWatermarkWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_uncompressedDataUsingCompressionAlgorithm:(int)arg1;
- (id)scn_compressedDataUsingCompressionAlgorithm:(int)arg1;
- (id)_operateOnDataUsingCompressionAlgorithm:(int)arg1 operation:(int)arg2;
@end
