//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSUCustomFormat;

__attribute__((visibility("hidden")))
@interface TSKCustomFormatListStemMatchObject : NSObject <NSCopying>
{
    TSUCustomFormat *mCustomFormat;
}

+ (id)stemMatchObjectWithCustomFormat:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initObjectWithCustomFormat:(id)arg1;

@end

