//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@protocol NSObject><NSCopying;

@interface PXSectionedObjectReference : NSObject <NSCopying>
{
    id <NSObject><NSCopying> _sectionObject;
    id <NSObject><NSCopying> _itemObject;
    id <NSObject><NSCopying> _subitemObject;
    id <NSObject><NSCopying> _leafObject;
    struct PXSimpleIndexPath _indexPath;
}

@property(readonly, copy, nonatomic) id <NSObject><NSCopying> leafObject; // @synthesize leafObject=_leafObject;
@property(readonly, nonatomic) struct PXSimpleIndexPath indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> subitemObject; // @synthesize subitemObject=_subitemObject;
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> itemObject; // @synthesize itemObject=_itemObject;
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> sectionObject; // @synthesize sectionObject=_sectionObject;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSectionObject:(id)arg1 itemObject:(id)arg2 subitemObject:(id)arg3 indexPath:(struct PXSimpleIndexPath)arg4;
- (id)init;

@end

