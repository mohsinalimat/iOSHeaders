//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTextCharPropertyBag : NSObject
{
}

+ (void)readCharacterProperties:(struct _xmlNode *)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;
+ (id)stringWithUnderlineType:(unsigned char)arg1;
+ (id)stringWithStrikeThroughType:(unsigned char)arg1;
+ (id)stringWithCapsType:(unsigned char)arg1;
+ (void)readFont:(struct _xmlNode *)arg1 characterProperties:(id)arg2;
+ (void)readFormatting:(struct _xmlNode *)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;
+ (unsigned char)readUnderlineType:(id)arg1;

@end

