import QtQuick 2.0

Rectangle {
    width: 360
    height: 360
    ListView {
        id: view
        anchors.fill: parent
        model: peopleModel
        delegate: listDelegate
//        delegate:
//            Text {
//            text: name
//        }
        //header: Rectangle { height: 10; width: parent.width; color: "green"}
    }

    Component {
        id: listDelegate

        Item {
            height: view.height/10
            width : view.width
            Text {
                text: name
                anchors.centerIn: parent
            }
            MouseArea {
                anchors.fill : parent
                //onClicked: modelData.sendMsg();
            }
        }
    }

//    ListModel {
//        id: peopleModel
//        ListElement { name : "Joe"; title : "T1" }
//        ListElement { name : "Bob"; title : "T2" }
//        ListElement { name : "Janney"; title : "T1" }
//        ListElement { name : "Charlie"; title : "T2" }
//    }
}
