//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerItemThumbnailKey : NSObject
{
    NSObject *_primaryKey;
    double _scale;
    struct CGSize _size;
}

@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSObject *primaryKey; // @synthesize primaryKey=_primaryKey;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrimaryKey:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;

@end

