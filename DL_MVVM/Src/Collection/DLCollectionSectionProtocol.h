//
//  DLCollectionSectionProtocol.h
//  DL_MVVM
//
//  Created by Daniel.Li on 8/3/16.
//  Copyright © 2016 Daniel.Li. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol DLCollectionSectionProtocol <NSObject>

@required
/**
 Section index in UICollectionView.
 */
@property (assign, nonatomic) NSUInteger index;

@optional

@property (nonatomic, assign) UIEdgeInsets sectionInset;
@property (nonatomic, assign) CGFloat minimumLineSpacing;
@property (nonatomic, assign) CGFloat minimumInteritemSpacing;
@property (nonatomic, assign) CGSize referenceSizeForHeader;
@property (nonatomic, assign) CGSize referenceSizeForFooter;



@end
