//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriCore/NSCopying-Protocol.h>

@class NSArray;

@interface SiriCoreSQLiteQueryOrder : NSObject <NSCopying>
{
    long long _mode;
    NSArray *_columnNames;
}

@property(readonly, copy, nonatomic) NSArray *columnNames; // @synthesize columnNames=_columnNames;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColumnNames:(id)arg1 mode:(long long)arg2;

@end

