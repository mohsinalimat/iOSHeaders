//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDTimeRange : NSObject <NSCopying>
{
    _Bool _deleted;
    double _start;
    double _end;
}

@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(nonatomic) double end; // @synthesize end=_end;
@property(nonatomic) double start; // @synthesize start=_start;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

