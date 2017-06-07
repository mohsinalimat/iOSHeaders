//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <vCard/NSObject-Protocol.h>

@class CNVCardLine, NSArray, NSData, NSString;

@protocol CNVCardLineSerialization <NSObject>
- (void)insertLine:(CNVCardLine *)arg1 atMarker:(id)arg2;
- (unsigned long long)estimatedDataLength;
- (id)insertionMarker;
- (void)serializeData:(NSData *)arg1;
- (void)serializeArray:(NSArray *)arg1 withItemSeparator:(NSString *)arg2;
- (void)serializeString:(NSString *)arg1;
- (_Bool)canSerializeData:(NSData *)arg1;
- (_Bool)canSerializeArray:(NSArray *)arg1;
- (_Bool)canSerializeString:(NSString *)arg1;
- (void)serializeVersionPlaceholder;
- (void)serializeOpaqueValue:(NSString *)arg1;
- (void)serializeLine:(CNVCardLine *)arg1;
@end

