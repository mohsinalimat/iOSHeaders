//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCoding-Protocol.h>
#import <NewsCore/NSCopying-Protocol.h>

@interface FCBreakingNewsInfo : NSObject <NSCopying, NSCoding>
{
    unsigned long long _index;
    unsigned long long _count;
}

+ (id)empty;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithIndex:(unsigned long long)arg1 count:(unsigned long long)arg2;

@end

