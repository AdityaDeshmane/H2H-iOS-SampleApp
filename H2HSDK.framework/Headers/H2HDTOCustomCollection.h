//
//  H2HDTOCustomCollection.h
//  DemoCollectionView
//
//  Created by Pratima.Ghadage on 08/02/17.
//  Copyright © 2017 Pratima.Ghadage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "H2HModelGridTile.h"

typedef enum
{
    GridStyleFullScreen,
    GridStyleArrangementTopBottom,
    GridStyleArrangementLeftRight,
    GridStyleNumberOfTilesThree,
    GridStyleNumberOfTilesFour
} EnumGridStyle;


@interface H2HDTOCustomCollection : NSObject

@property (nonatomic) NSMutableArray<H2HModelGridTile *> *arrGridTiles;
@property (nonatomic) EnumGridStyle                      gridStyle;
@property (nonatomic)CGFloat                     edgeInsetForSection;
@property (nonatomic)CGFloat                     minimumLineSpacing;
@property (nonatomic)CGFloat                     minimumInterCellSpacing;
@end
